//
//  XHNewsContainerViewController.h
//  XHNewsFramework
//
//  Created by 曾 宪华 on 14-1-24.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XHBaseViewController.h"
#import "XHEdittingScrollView.h"
#import "XHContentView.h"

@interface XHNewsContainerViewController : XHBaseViewController <UIScrollViewDelegate, XHContentViewDelegate>

@property (nonatomic, assign) CGFloat contentViewPaddingX; // default is 0
@property (nonatomic, assign) CGFloat contentViewContentInsetTop; // default is 0
@property (nonatomic, assign) int currentPage;
@property (nonatomic, assign) int lastDisplayedPage;
@property (nonatomic, assign) BOOL isEditing; // default is NO

@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) NSArray *unItems;

- (XHContentView *)dequeueReusablePageWithIdentifier:(NSString*)identifier;
- (XHContentView *)contentViewAtPage:(NSInteger)page;

#pragma mark frame and sizes
- (CGRect)scrollViewFrame;
- (CGSize)contentViewSize;
- (NSInteger)numberOfVisibleContentViews;

#pragma mark - DataSource
- (NSInteger)numberOfContentViews;

#pragma mark - scroll the contentView
- (void)goToContentView:(NSInteger)index;

#pragma mark - Custom UI
// top
@property (nonatomic, strong) UIImage *topScrollViewToolBarBackgroundImage; // default is nil
@property (nonatomic, strong) UIColor *topScrollViewToolBarBackgroundColor; // default is [UIColor colorWithWhite:0.902 alpha:1.000]
@property (nonatomic, strong) UIImage *managerButtonBackgroundImage; // default is arrow image
@property (nonatomic, strong) UIColor *indicatorColor; // default is redColor
@property (nonatomic, assign) CGFloat topScrollViewToolBarHieght; // default is 36
@property (nonatomic, strong) UIImage *leftShadowImage;
@property (nonatomic, strong) UIImage *rightShadowImage;

// mid
@property (nonatomic, strong) UIImage *midContentLogoImage; // default is netEase logo

// contentScrollView
@property (nonatomic, strong) UIColor *contentScrollViewBackgroundColor; // default is [UIColor whiteColor]

#pragma mark - Custom Action
// 管理menu item的按钮事件，由你自己发挥
- (void)didOpenManagerItems;

@end
