//
//  SCNavigationDropdownMenu.h
//  SCNavigationDropdownMenu
//
//  Created by 宁小陌 on 2018/8/22.
//  Copyright © 2018年 宁小陌. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCNavigationDropdownMenu;

@protocol SCNavigationDropdownMenuDataSource <NSObject>

@required
- (NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;

@optional
// Default is [UIFont systemFontOfSize:17.0]
- (UIFont *)titleFontForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is [UIColor blackColor]
- (UIColor *)titleColorForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is nil
- (UIImage *)arrowImageForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is 0.0
- (CGFloat)arrowPaddingForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is 0.25
- (NSTimeInterval)animationDurationForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is YES
- (BOOL)keepCellSelectionForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is 45.0
- (CGFloat)cellHeightForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is UIEdgeInsetsMake(0.0, 0.0, 0.0, 0.0)
- (UIEdgeInsets)cellSeparatorInsetsForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is NSTextAlignmentCenter
- (NSTextAlignment)cellTextAlignmentForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is [UIFont systemFontOfSize:16.0]
- (UIFont *)cellTextFontForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is [UIColor blackColor]
- (UIColor *)cellTextColorForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is [UIColor whiteColor]
- (UIColor *)cellBackgroundColorForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;
/// Default is nil
- (UIColor *)cellSelectionColorForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu;

@end

@protocol SCNavigationDropdownMenuDelegate <NSObject>

@required
- (void)navigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu didSelectTitleAtIndex:(NSUInteger)index;

@end

@interface SCNavigationDropdownMenu : UIButton

@property (nonatomic, weak) id <SCNavigationDropdownMenuDataSource> dataSource;
@property (nonatomic, weak) id <SCNavigationDropdownMenuDelegate> delegate;

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;

- (void)show;
- (void)hide;

@end
