require 'formula'

class EndianH < Formula
  homepage 'https://github.com/hanklords/endian_h'
  url 'https://github.com/hanklords/endian_h.git'
  version "1"

  def install
    include.install "endian.h"
  end
end
