#
# Be sure to run `pod lib lint FtAdsPlatform.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FTAdBaseAdapter'
  s.version          = '1.0.0.1'
  s.summary          = 'Base a Adapter '

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
It is a FTAdBaseAdapter used on iOS, which implement by Objective-C.
                       DESC

  s.homepage         = 'https://github.com/fotoable-pub/monetize-sdk-ios'
  s.license          = { :type => 'MIT'}
  s.author           = { 'liushuai-fotoable' => 'liushuai@fotoable.com' }
  s.source           = { :http => 'https://github.com/fotoable-pub/monetize-sdk-ios/raw/master/FTAdBaseAdapter-0.0.1.zip'}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.requires_arc = true  

  s.vendored_frameworks = '*.framework' 
 
end
