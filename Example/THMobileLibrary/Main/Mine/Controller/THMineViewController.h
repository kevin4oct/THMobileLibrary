//
//  THMineViewController.h
//  THMobileLibrary
//
//  Created by 天海网络  on 2017/6/7.
//  Copyright © 2017年 C-bin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "THRootViewController.h"
#import "THNewsTableView.h"
#import "THAnnouncementTableView.h"
@interface THMineViewController : THRootViewController
@property (nonatomic, strong) UISegmentedControl *segmentCtrl;

@property (nonatomic, strong) UIScrollView *scrollView;
@end
