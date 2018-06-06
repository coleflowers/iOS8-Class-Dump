/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUTableViewController.h>
#import <Videos/MPUCompletionQueryDataSourceDelegate.h>
#import <Videos/MPUCompletionFooterViewDelegate.h>

@class NSIndexPath, VideosTVSeasonEpisodesDataSource, NSString;

@interface VideosTVEpisodesTableViewController : MPUTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate> {

	NSIndexPath* _expandedIndexPath;

}

@property (nonatomic,readonly) VideosTVSeasonEpisodesDataSource * queryDataSource; 
@property (nonatomic,retain) NSIndexPath * expandedIndexPath;                                   //@synthesize expandedIndexPath=_expandedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesCellConfigurations;
-(NSIndexPath *)expandedIndexPath;
-(void)setExpandedIndexPath:(NSIndexPath *)arg1 ;
-(void)_configureFooterView:(id)arg1 forOffer:(id)arg2 ;
-(void)_moreEpisodesAction:(id)arg1 ;
-(long long)_footerStyle;
-(void)setDataSource:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
-(void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2 ;
-(void)completionFooterView:(id)arg1 didChangePreferredVariant:(long long)arg2 ;
-(void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2 ;
-(void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(long long)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(long long)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(long long)arg2 ;
-(id)_createTableView;
-(id)initWithDataSource:(id)arg1 ;
@end

