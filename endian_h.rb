require 'formula'

class EndianH < Formula
  homepage 'https://github.com/hanklords/endian_h'
  url 'https://github.com/hanklords/endian_h.git'
  sha1 'fb3f00802347ee53901632d2866c5a8e394a6229'
  version "1"

  def install
    include.install "endian.h"
  end
end
