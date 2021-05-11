Pod::Spec.new do |s|

    s.name = 'FSCommonKit'
    s.version = '1.0.0'
    s.platform = :ios, '9.0'
    s.license = 'ForgetSou'
    s.homepage = 'https://github.com/ForgetSou/FSCommonKit'
    s.author = { 'ForgetSou' => 'johnvertios@gmail.com' }
    s.source = { :git => 'https://github.com/ForgetSou/FSCommonKit.git', :tag => s.version }
    s.summary = 'ForgetSou CommonKit'
    s.description = 'ForgetSou CommonKit'

    s.requires_arc = true

    s.source_files = 'FSCommonKit/Class//**/*'

end
