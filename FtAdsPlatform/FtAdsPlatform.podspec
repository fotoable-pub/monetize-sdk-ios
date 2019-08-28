#
# Be sure to run `pod lib lint FtAdsPlatform.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FtAdsPlatform'
  s.version          = '0.0.4'
  s.summary          = 'FtAdsPlatform.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
 变现联盟 变现联盟 变现联盟 变现联盟
                       DESC

  s.homepage         = 'https://github.com/fotoable-pub/monetize-sdk-ios'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liushuai-fotoable' => 'liushuai@fotoable.com' }
  s.source           = { :git => 'https://github.com/fotoable-pub/monetize-sdk-ios.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'FtAdsPlatform/Classes/**/*'

  s.vendored_frameworks = 'FtAdsPlatform/Classes/*.framework'
  # s.resource_bundles = {
  #   'FtAdsPlatform' => ['FtAdsPlatform/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
