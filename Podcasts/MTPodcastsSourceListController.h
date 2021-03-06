/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSourceListController.h>
#import <Podcasts/MTEmptyContainerViewController.h>

@class NSString;

@interface MTPodcastsSourceListController : MTSourceListController <MTEmptyContainerViewController> {

	NSString* _derivedPropertyCallbackToken;
	BOOL hadDeletions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultsKey;
-(void)configureRowHeight;
-(void)getObjectId:(id*)arg1 andIndexPath:(id*)arg2 forItemWithUuid:(id)arg3 ;
-(id)firstValidIndexPath;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)explicitContentChanged:(id)arg1 ;
-(void)reloadCellForPodcastUuid:(id)arg1 ;
-(id)emptyContainerView;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

