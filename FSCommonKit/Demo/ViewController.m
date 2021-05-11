//
//  ViewController.m
//  FSCommonKit
//
//  Created by Forget on 2021/5/11.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) UITableView *tableView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self.collectionView registerNib:[UINib nibWithNibName:NSStringFromClass([UICollectionViewCell class])
                                                    bundle:nil]
          forSupplementaryViewOfKind:UICollectionElementKindSectionHeader
                 withReuseIdentifier:@"identifier"];
    [self.collectionView registerNib:[UINib nibWithNibName:NSStringFromClass([UICollectionViewCell class])
                                                    bundle:nil]
          forSupplementaryViewOfKind:UICollectionElementKindSectionFooter
                 withReuseIdentifier:@"identifier"];
    [self.collectionView registerClass:[UICollectionViewCell class]
            forSupplementaryViewOfKind:UICollectionElementKindSectionHeader
                   withReuseIdentifier:@"identifier"];
    [self.collectionView registerClass:[UICollectionViewCell class]
            forSupplementaryViewOfKind:UICollectionElementKindSectionFooter
                   withReuseIdentifier:@"identifier"];
    
    [self.tableView registerNib:[UINib nibWithNibName:NSStringFromClass([UITableViewCell class])
                                               bundle:nil]
                     forHeaderFooterViewReuseIdentifier:@"identifier"];
    
    
}

- (void)setF:(CGFloat)floatValue {
    
}


@end
