/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol RefinementSelectionDelegate;
@class SearchInfo, NSDictionary;

@interface RefinementTableViewController : UITableViewController {

	SearchInfo* _refinementSearchInfo;
	NSDictionary* _textAttributes;
	id<RefinementSelectionDelegate> _delegate;

}

@property (nonatomic,retain) SearchInfo * refinementSearchInfo;                            //@synthesize refinementSearchInfo=_refinementSearchInfo - In the implementation block
@property (assign,nonatomic,__weak) id<RefinementSelectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setRefinementSearchInfo:(SearchInfo *)arg1 ;
-(SearchInfo *)refinementSearchInfo;
-(void)setDelegate:(id<RefinementSelectionDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RefinementSelectionDelegate>)delegate;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(long long)arg1 ;
@end

