require 'mecab'
# require 'jdepp'

# opt   = Jdepp::Option.new(ARGV.size + 1, ["$0"] + ARGV);

# parser = Jdepp::Parser.new(opt)

# parser.init()

sentence = "沼にハマる"
tagger = MeCab::Tagger.new


puts tagger.parse sentence
