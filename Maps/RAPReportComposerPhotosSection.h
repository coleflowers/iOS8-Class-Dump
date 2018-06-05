/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol RAPReportComposerCommentPartOutput;
@class NSMutableArray, RAPPhotoPickerController, NSString;

@interface RAPReportComposerPhotosSection : RAPTablePartSection <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSMutableArray* _photos;
	id<RAPReportComposerCommentPartOutput> _question;
	RAPPhotoPickerController* _picker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForRowAtIndex:(long long)arg1 ;
-(void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2 ;
-(long long)_appearance;
-(id)initWithOutput:(id)arg1 ;
-(void)_startPickingPhotoFromView:(id)arg1 ;
-(double)heightForRowAtIndex:(long long)arg1 ;
-(long long)rowsCount;
@end
