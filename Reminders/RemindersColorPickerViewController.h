/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersColorPickerViewControllerDelegate;
@class UITableView, NSString;

@interface RemindersColorPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	int _selectedColor;
	id<RemindersColorPickerViewControllerDelegate> _delegate;
	UITableView* _tableView;

}

@property (assign) int selectedColor;                                                              //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) id<RemindersColorPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSelectedListColor:(int)arg1 ;
-(int)selectedColor;
-(void)setSelectedColor:(int)arg1 ;
-(void)setDelegate:(id<RemindersColorPickerViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RemindersColorPickerViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
@end

