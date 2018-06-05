/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPTableViewController.h>

@class RAPReport, UIBarButtonItem;

@interface RAPReportTableViewController : RAPTableViewController {

	/*^block*/id _completion;
	RAPReport* _report;
	id _lastTablePartsUpdateSender;
	UIBarButtonItem* _sendButtonItem;

}

@property (nonatomic,readonly) RAPReport * report;                            //@synthesize report=_report - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * sendButtonItem;              //@synthesize sendButtonItem=_sendButtonItem - In the implementation block
@property (nonatomic,readonly) id completion;                                 //@synthesize completion=_completion - In the implementation block
-(id)initWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tableParts;
-(void)_send;
-(BOOL)usesNavigationControllerPushForSegue;
-(void)invokeCompletionWithOutcome:(long long)arg1 ;
-(void)_updateTableParts;
-(void)_updateTablePartsScrolling:(BOOL)arg1 ;
-(void)setNeedsTablePartsUpdateWithSender:(id)arg1 ;
-(void)updateTablePartsIfNeeded;
-(void)dealloc;
-(id)init;
-(id)completion;
-(void)viewDidLoad;
-(UIBarButtonItem *)sendButtonItem;
-(RAPReport *)report;
@end

