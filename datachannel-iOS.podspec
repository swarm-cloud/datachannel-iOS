Pod::Spec.new do |s|
  s.name = 'datachannel-iOS'
  s.version = '1.0.190'
  s.license = 'MIT'
  s.summary = 'P2P Streaming Engine for iOS, tvOS and macOS.'
  s.homepage = 'https://www.cdnbye.com/en/'
  s.authors = { 'SwarmCloud' => 'cdnbye@gmail.com' }
  s.documentation_url = 'https://www.cdnbye.com/en/views/ios/v3/usage.html'

  s.ios.deployment_target = '13.0'
  s.osx.deployment_target = '10.15'
  s.tvos.deployment_target = '13.0'

  s.swift_versions = ['5']

  s.source        = { :git => 'https://github.com/swarm-cloud/datachannel-iOS.git', :tag => s.version }

  s.vendored_frameworks = 'datachannel_wrapper.xcframework'

end