require 'mkmf'

# Debugging output to check the current directory
puts "Current directory: #{Dir.pwd}"

$libs   = '-lmecab -lstdc++'
$defs   = ['-DHAVE_CONFIG_H']
$INCFLAGS += ' -I../.. -I../../src'

# Debugging output to check the full path to config.h
config_h_path = File.expand_path('../../../config.h', __FILE__)
puts "Looking for config.h at: #{config_h_path}"

# add SSE4.2 CXXFLAGS; dirty bit
if File.exist?(config_h_path)
  $CFLAGS += ' -msse4.2' if File.read(config_h_path) =~ /^#define USE_SSE4_2_POPCNT 1$/
else
  puts "config.h not found at: #{config_h_path}"
  exit 1
end


create_makefile('jdepp')
