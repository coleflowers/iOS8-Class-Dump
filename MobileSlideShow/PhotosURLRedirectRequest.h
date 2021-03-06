/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:59:37 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol PLRootLibraryNavigationController;
@class NSURL, UIAlertView, NSString;

@interface PhotosURLRedirectRequest : NSObject <UIAlertViewDelegate> {

	NSURL* _URL;
	UIAlertView* _alertView;
	id<PLRootLibraryNavigationController> _rootController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDestinationURL:(id)arg1 rootController:(id)arg2 ;
-(void)_showAlertForError:(int)arg1 ;
-(BOOL)_checkAndAlertSubscribedStreamsLimitReached;
-(void)_navigateToPhotoStreamTab;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)performRequest;
@end

