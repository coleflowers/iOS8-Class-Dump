/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIActivity.h>
#import <MobileNotes/QLPreviewControllerDataSource.h>
#import <MobileNotes/QLPreviewControllerDelegate.h>

@class NotesQuickLookActivityItem, NSString;

@interface NotesQuickLookActivity : UIActivity <QLPreviewControllerDataSource, QLPreviewControllerDelegate> {

	NotesQuickLookActivityItem* _item;

}

@property (nonatomic,retain) NotesQuickLookActivityItem * item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentPreviewController;
-(void)_cleanup;
-(NotesQuickLookActivityItem *)item;
-(void)setItem:(NotesQuickLookActivityItem *)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_beforeActivity;
@end

