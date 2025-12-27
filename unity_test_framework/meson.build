project(
  '39c3_c_code_testing',
  'c',
  meson_version : '>= 1.3.0',
  version : '0.1',
  default_options : ['warning_level=3'],
)

#TODO: add real source code
# dependencies = [
# ]

# sources = [
# ]

# exe = executable(
#   '39c3_c_code_testing',
#   sources,
#   dependencies : dependencies,
#   install : true,
# )
#
test_env = environment()
if get_option('b_sanitize').contains('address')
  test_env.set('ASAN_OPTIONS',
    'abort_on_error=1',
    'allocator_may_return_null=1',
    'allocator_release_to_os_interval_ms=500',
    'detect_container_overflow=1',
    'detect_stack_use_after_return=1',
    'fast_unwind_on_fatal=0','handle_abort=1',
    'handle_segv=1',
    'handle_sigill=1',
    'max_uar_stack_size_log=16',
    'print_scariness=1',
    'quarantine_size_mb=10',
    'strict_memcmp=1',
    'symbolize=1',
    'use_sigaltstack=1',
    'dedup_token_length=3')

  if compiler.has_argument('-fsanitize=leak')
    test_env.append('ASAN_OPTIONS', 'detect_leaks=1')
  endif
endif

if get_option('b_sanitize').contains('undefined')
  test_env.set('UBSAN_OPTIONS',
    'halt_on_error=1',
    'print_stacktrace=1',
    'print_summary=1',
    'symbolize=1',
    'dedup_token_length=3')
endif

if get_option('b_sanitize').contains('memory')
  test_env.set('MSAN_OPTIONS',
    'abort_on_error=1',
    'print_stats=1',
    'symbolize=1',
    'dedup_token_length=3')
endif


# setup the Unity Test framework
fs = import('fs')
ruby = find_program('ruby', required : false)
if ruby.found()
  unity_dep = dependency('unity', fallback : ['unity', 'unity_dep'])

  # use the test runner generator script
  gen_test_runner = subproject('unity').get_variable('gen_test_runner')
  unit_test_src = files([
    'test_example.c',
    ])

  foreach test_file : unit_test_src
    test_name = fs.name(test_file).split('.')[0]

    test_runner = gen_test_runner.process(test_file)
    test_exe = executable(test_name, test_file, test_runner,
      dependencies : [unity_dep])

    test(test_name.replace('test_', '') + ' unit tests',
      test_exe,
      env : test_env)
  endforeach

else
   message('Ruby not found. Tests that require Ruby will be disabled.')
endif

