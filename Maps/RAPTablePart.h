/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RAPPresentingViewController;
@class UITableView, NSArray, UIViewController, RAPTablePartsDataSource;

@interface RAPTablePart : NSObject {

	UITableView* _tableView;
	NSArray* _sections;
	UIViewController*<RAPPresentingViewController> _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<RAPPresentingViewController> presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) RAPTablePartsDataSource * dataSource; 
+(BOOL)isHoldingChangesAffectingTableView:(id)arg1 ;
+(void)holdChangesAffectingTableView:(id)arg1 withinBlock:(/*^block*/id)arg2 ;
-(id)initWithSections:(id)arg1 ;
-(void)didChange;
-(void)tableViewTintColorDidChange;
-(void)presentingViewControllerViewDidLayoutSubviews;
-(void)holdChangesAffectingTableViewWithinBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(RAPTablePartsDataSource *)dataSource;
-(UIViewController*<RAPPresentingViewController>)presentingViewController;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_setTableView:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController*<RAPPresentingViewController>)arg1 ;
-(UITableView *)tableView;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)_dataSource;
@end

