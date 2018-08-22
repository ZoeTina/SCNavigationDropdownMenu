//
//  ViewController.m
//  SCNavigationDropdownMenu
//
//  Created by 宁小陌 on 2018/8/22.
//  Copyright © 2018年 宁小陌. All rights reserved.
//

#import "ViewController.h"
#import "SCNavigationDropdownMenu.h"

@interface ViewController ()<SCNavigationDropdownMenuDataSource, SCNavigationDropdownMenuDelegate>
@property (weak, nonatomic) IBOutlet UILabel *label;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self setup];
}

- (void)setup {
    SCNavigationDropdownMenu *menu = [[SCNavigationDropdownMenu alloc] initWithNavigationController:self.navigationController];
    menu.dataSource = self;
    menu.delegate = self;
    self.navigationItem.titleView = menu;
}

- (NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu {
    return self.titleArray;
}

- (UIColor *)titleColorForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu{
    return [UIColor whiteColor];
}

- (CGFloat)arrowPaddingForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu {
    return 8.0;
}

- (UIImage *)arrowImageForNavigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu {
    return [UIImage imageNamed:@"Arrow"];
}

- (void)navigationDropdownMenu:(SCNavigationDropdownMenu *)navigationDropdownMenu didSelectTitleAtIndex:(NSUInteger)index {
    self.label.text = self.titleArray[index];
}

#pragma mark - Property method

- (NSArray<NSString *> *)titleArray {
    return @[@"Hello", @"World", @"I am Sunnyyoung 😄", @"T very long text!!!"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
