/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:42:46 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class StockPickerViewController, NSString;

@interface StocksBackSideViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	StockPickerViewController* _pickerViewController;
	BOOL _isShowing;
	BOOL _didScroll;
	BOOL _suppressNotifications;

}

@property (nonatomic,retain) StockPickerViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showStockPicker;
-(void)_stockListChanged;
-(void)setPickerViewController:(StockPickerViewController *)arg1 ;
-(void)updateDoneButton;
-(void)cancelPicker;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotate;
-(BOOL)isLoading;
-(BOOL)isShowing;
-(StockPickerViewController *)pickerViewController;
@end

