Pod::Spec.new do |s|
s.name         = "IZHairlineBorderView"
s.version      = "0.1"
s.summary      = "UIView subclass for drawing hairline borders"
s.homepage     = "http://www.github.com/izrie"

s.license      = { :type => 'MIT', :file => 'LICENSE.txt' }
s.author       = { "Hansaem Kim" => "bloodthirstier@gmail.com" }

s.source       = { :git => "https://github.com/izrie/IZHairlineBorderView.git" }

s.ios.deployment_target = '6.0'

s.source_files = 'Classes/*.{m,h}'
s.public_header_files = 'Classes/*.h'

s.requires_arc = true

end