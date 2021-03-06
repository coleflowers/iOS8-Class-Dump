/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTFetchedTableViewController.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <Podcasts/IMNowPlayingTOCViewController.h>

@protocol MTAVPlayerTocViewControllerDelegate;
@class MTPlayerManifest, NSString;

@interface MTAVPlayerTOCViewController : MTFetchedTableViewController <MTReachabilityObserver, IMNowPlayingTOCViewController> {

	MTPlayerManifest* _manifest;
	id<MTAVPlayerTocViewControllerDelegate> _tocDelegate;

}

@property (nonatomic,retain) MTPlayerManifest * manifest;                                             //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic,__weak) id<MTAVPlayerTocViewControllerDelegate> tocDelegate;              //@synthesize tocDelegate=_tocDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForEpisodesFromManifest:(id)arg1 ;
+(id)sharedDateFormatter;
-(void)reachabilityChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)airplaneModeChanged:(id)arg1 ;
-(void)updateRowHeight;
-(id<MTAVPlayerTocViewControllerDelegate>)tocDelegate;
-(void)setTocDelegate:(id<MTAVPlayerTocViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
-(MTPlayerManifest *)manifest;
-(void)setManifest:(MTPlayerManifest *)arg1 ;
@end

