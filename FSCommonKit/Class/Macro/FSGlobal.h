//
//  FSGlobal.h
//  FSCommonKit
//
//  Created by Forget on 2021/5/11.
//

#ifndef FSGlobal_h
#define FSGlobal_h

#pragma mark - ===================== 设备 =====================
/* 是否是 iPhone X 以上设备 */
#define isIphoneXAbove ({\
    int tmp = 0;\
    if (@available(iOS 11.0, *)) {\
        if ([UIApplication sharedApplication].delegate.window.safeAreaInsets.top > 20 || [UIApplication sharedApplication].delegate.window.safeAreaInsets.left > 20) {\
            tmp = 1;\
        }else{\
            tmp = 0;\
        }\
    }else{\
        tmp = 0;\
    }\
    tmp;\
})

#pragma mark - ===================== 尺寸 =====================

#define kScreenW                            ([[UIScreen mainScreen]bounds].size.width)
#define kScreenH                            ([[UIScreen mainScreen]bounds].size.height)
#define kScreenBounds                       [UIScreen mainScreen].bounds
#define kScreenSize                         [UIScreen mainScreen].bounds.size

/* 状态栏高度 */
#define kStatusBarH                         (CGFloat)(isIphoneXAbove ? (44.0) : (20.0))
/* 导航栏高度 */
#define kNavBarH                            (44)
/* 状态栏和导航栏总高度 */
#define kNavBarAndStatusBarH                (CGFloat)(isIphoneXAbove ? (88.0) : (64.0))
/* TabBar高度 */
#define kTabStatusH                         (CGFloat)(isIphoneXAbove ? 34.0 : 0)

#define kTabBarH                            (CGFloat)(isIphoneXAbove ? (49.0 + 34.0) : (49.0))
/* 导航条和Tabbar总高度 */
#define kNavAndTabBarH                      (kNavBarAndStatusBarH + kTabBarH)

#pragma mark - ===================== 色值 =====================
/// 色值(RGBA)
#define RGB(r,g,b)                          [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1]
#define RGBA(r,g,b,a)                       [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define KColorFromRGB(rgbValue)             [UIColor colorWithHexString:rgbValue]
#define kColorName(name)                    [UIColor colorNamed:name];
/// 随机颜色
#define kRandomColor                        [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1]

#pragma mark - ===================== 判空 =====================
/// 字符串
#define kStringIsEmpty(string)              (string == NULL || [string isKindOfClass:[NSNull class]] || string == nil || [string length] < 1)
/// 数组
#define kArrayIsEmpty(array)                (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
/// 字典
#define kDictionaryIsEmpty(dictionary)      (dictionary == nil || [dictionary isKindOfClass:[NSNull class]] || dictionary.allKeys.count == 0)
/// 对象
#define kObjectIsEmpty(object)              (object == nil||[object isKindOfClass:[NSNull class]]||([object respondsToSelector:@selector(length)] && [(NSData *)object length] == 0)|| ([object respondsToSelector:@selector(count)] && [(NSArray *)object count] == 0))

#pragma mark - ===================== 字体 =====================
#define kSystemFont(x)                      [UIFont systemFontOfSize:x]
#define kBoldFont(x)                        [UIFont boldSystemFontOfSize:x]
#define kMediumFont(x)                      [UIFont italicSystemFontOfSize:x]

#pragma mark - ===================== 系统 =====================
// APP对象 （单例对象）
#define kApplication                        [UIApplication sharedApplication]
// 主窗口 （keyWindow）
#define kKeyWindow                          kApplication.keyWindow
// 通知中心 （单例对象）
#define                                     kNotificationCenter [NSNotificationCenter defaultCenter]
// 发送通知
#define                                     KPostNotification(name, obj, info) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj userInfo:info]
// APP版本号
#define kAppVersion                         [[[NSBundle mainBundle] infoDictionary] valueForKey:@"CFBundleShortVersionString"]
#define kBundleVersion                      [[[NSBundle mainBundle] infoDictionary] valueForKey:@"CFBundleVersion"]
#define kBundleId                           [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"]
// APP显示名称
#define kAppDisplayName                     [[[NSBundle mainBundle] infoDictionary] valueForKey:@"CFBundleDisplayName"]
// 获取当前语言
#define kCurrentLanguage                    [NSLocale preferredLanguages].firstObject
// 手机系统版本
#define kSystemVersion                      [[UIDevice currentDevice] systemVersion]
// 当前区域
#define kCurrentLocal                       [[NSLocale currentLocale] objectForKey:NSLocaleIdentifier]


#pragma mark - ===================== 图片 =====================
// 加载图片
#define kImage(imageName)                   [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]
#define kResourcePNGImage(NAME)             [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"png"]]
#define kResourceJPGImage(NAME)             [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"jpg"]]
#define kResourceImage(NAME, EXT)           [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:(EXT)]]

#pragma mark - ===================== 注册Nib & Class =====================
// StoryBoard
#define kStoryBoardVC(name, identifier)     [[UIStoryboard storyboardWithName:(name) bundle:nil] instantiateViewControllerWithIdentifier:identifier]
// TableView
#define kRegisterNibTV(tableView, cell, identifier)\
            [tableView registerNib:[UINib nibWithNibName:NSStringFromClass([cell class]) bundle:nil] forCellReuseIdentifier:identifier]

#define kRegisterClassTV(tableView, cell, identifier)\
            [tableView registerClass:[cell Class] forCellReuseIdentifier:identifier]

#define kRegisterNibHFV(tableView, HFView, identifier)\
            [tableView registerNib:[UINib nibWithNibName:NSStringFromClass([cell class]) bundle:nil] forHeaderFooterViewReuseIdentifier:identifier]
// CollectionView
#define kRegisterNibCollectionView(collectionView, cell, identifier)\
            [collectionView registerNib:[UINib nibWithNibName:NSStringFromClass([cell class]) bundle:nil] forCellWithReuseIdentifier:identifier]
#define kRegisterCellCollectionView(collectionView, cell, identifier)\
            [collectionView registerClass:[cell Class] forCellWithReuseIdentifier:identifier]

#define kRegisterNibCVHeader(collectionView, identifier)\
            [collectionView registerNib:[UINib nibWithNibName:NSStringFromClass([UICollectionViewCell class])\
                                                       bundle:nil]\
             forSupplementaryViewOfKind:UICollectionElementKindSectionHeader\
                    withReuseIdentifier:identifier]
#define kRegisterNibCVFooter(collectionView, identifier)\
            [collectionView registerNib:[UINib nibWithNibName:NSStringFromClass([UICollectionViewCell class])\
                                                       bundle:nil]\
             forSupplementaryViewOfKind:UICollectionElementKindSectionFooter\
                    withReuseIdentifier:identifier];

#pragma mark - ===================== 沙盒 =====================
// 沙盒路径
#define kHomeDirectory                      NSHomeDirectory()
#define kTemDirectory                       NSTemporaryDirectory()
#define kDocumentDirectory                  NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject
#define kLibraryDirectory                   NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES).firstObject
#define kCachesDirectory                    NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject

#pragma mark - ===================== 强弱引用 =====================
// 推荐使用（摘自YYKit）
/**
 Synthsize a weak or strong reference.
 
 Example:
 @weakify(self)
 [self doSomething^{
 @strongify(self)
 if (!self) return;
 ...
 }];
 
 */
#ifndef weakify
#if DEBUG
#if __has_feature(objc_arc)
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif

#ifndef strongify
#if DEBUG
#if __has_feature(objc_arc)
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif


#pragma mark - ===================== 真机/模拟器判断 =====================

#if TARGET_OS_IPHONE
//真机
#endif
#if TARGET_IPHONE_SIMULATOR
//模拟器
#endif


#ifdef DEBUG
#define NSLog(format,...) printf("\n[%s] %s [第%d行] %s\n",__TIME__,__FUNCTION__,__LINE__,[[NSString stringWithFormat:format,## __VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...)
#endif


#pragma mark - ===================== 屏幕自适应 =====================
/**
 *  基准屏幕宽度 540.0
 *  以屏幕宽度为固定比例关系，来计算对应的值。
 */
#define AdaptW(floatValue) ({\
    float tmp = 0.0f;\
    if (@available(iOS 13.0, *)) { \
        if ([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad) {\
            tmp = floatValue * 1.5;\
        } else {\
            tmp = floatValue * [[UIScreen mainScreen] bounds].size.width/375.0;\
        }\
    } else {\
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {\
            tmp = floatValue * 1.5;\
        } else {\
            tmp = floatValue*[[UIScreen mainScreen] bounds].size.width/375.0;\
        }\
    }\
    tmp;\
})
/// 定义常量 必须是C语言字符串 NSLayoutConstraint 自适应管理Key
static char *AdapterScreenKey = "AdapterScreenKey";

#endif /* FSGlobal_h */
