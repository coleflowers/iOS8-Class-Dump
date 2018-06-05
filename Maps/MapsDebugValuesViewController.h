/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Maps/MapsDebugViewController.h>

@protocol MapsDebugViewControllerNavigationDelegate, MapsDebugViewControllerDelegate;
@class NSMutableArray, NSArray, NSString;

@interface MapsDebugValuesViewController : UITableViewController <MapsDebugViewController> {

	NSMutableArray* _mutableSections;
	NSArray* _sections;
	id<MapsDebugViewControllerNavigationDelegate> _navigationDelegate;
	id<MapsDebugViewControllerDelegate> _delegate;
	/*^block*/id _prepareContentBlock;
	NSString* _navigationDestinationTitle;

}

@property (nonatomic,copy) NSString * navigationDestinationTitle;                                                  //@synthesize navigationDestinationTitle=_navigationDestinationTitle - In the implementation block
@property (nonatomic,copy) id prepareContentBlock;                                                                 //@synthesize prepareContentBlock=_prepareContentBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)navigationDestinationTitle;
-(NSString *)navigationDestinationTitle;
-(void)segueToViewController:(id)arg1 ;
-(void)addSectionWithTitle:(id)arg1 content:(/*^block*/id)arg2 ;
-(void)prepareContent;
-(void)loadContentNowIfNeeded;
-(void)willNavigateToSubsequentController:(id)arg1 ;
-(id)prepareContentBlock;
-(void)setPrepareContentBlock:(id)arg1 ;
-(void)setNavigationDestinationTitle:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MapsDebugViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<MapsDebugViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)_sections;
-(id<MapsDebugViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<MapsDebugViewControllerNavigationDelegate>)arg1 ;
-(void)_done;
-(void)addSection:(id)arg1 ;
@end

