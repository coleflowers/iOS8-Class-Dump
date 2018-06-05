/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Maps/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSString;

@interface MNSettingsTracePickerController : AuxiliaryDebugViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate> {

	NSArray* _myFiles;
	NSString* _selectedTracePath;
	NSString* _selectedTraceName;
	BOOL _showingPlayButton;
	NSArray* _myFileSheetTrackPickerOptions;

}

@property (nonatomic,retain) NSArray * myFileSheetTracePickerOptions;              //@synthesize myFileSheetTrackPickerOptions=_myFileSheetTrackPickerOptions - In the implementation block
@property (nonatomic,retain) NSArray * myFiles;                                    //@synthesize myFiles=_myFiles - In the implementation block
@property (nonatomic,retain) NSString * selectedTracePath;                         //@synthesize selectedTracePath=_selectedTracePath - In the implementation block
@property (nonatomic,retain) NSString * selectedTraceName;                         //@synthesize selectedTraceName=_selectedTraceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationDestinationTitle;
-(void)_reloadTraces;
-(void)_updateTracePickerOptions;
-(void)setMyFiles:(NSArray *)arg1 ;
-(Class)_mfMailComposeViewController;
-(void)setMyFileSheetTracePickerOptions:(NSArray *)arg1 ;
-(void)setSelectedTraceName:(NSString *)arg1 ;
-(void)setSelectedTracePath:(NSString *)arg1 ;
-(NSArray *)myFileSheetTracePickerOptions;
-(void)_showDeleteFileSheetForTraceName:(id)arg1 ;
-(NSArray *)myFiles;
-(NSString *)selectedTracePath;
-(NSString *)selectedTraceName;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

