/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class MTOptionSetting;

@interface MTOptionsTableViewController : UITableViewController {

	/*^block*/id _optionSelectedBlock;
	MTOptionSetting* _option;

}

@property (nonatomic,copy) id optionSelectedBlock;                  //@synthesize optionSelectedBlock=_optionSelectedBlock - In the implementation block
@property (nonatomic,retain) MTOptionSetting * option;              //@synthesize option=_option - In the implementation block
+(id)optionFont;
+(id)selectedColor;
+(id)footerFont;
+(double)rowHeight;
-(void)updateRowHeight;
-(id)newFooterView;
-(id)optionSelectedBlock;
-(void)setOptionSelectedBlock:(id)arg1 ;
-(id)initWithOption:(id)arg1 ;
-(MTOptionSetting *)option;
-(id)headerText;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(unsigned long long)selectedIndex;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)footerText;
-(void)setOption:(MTOptionSetting *)arg1 ;
@end

