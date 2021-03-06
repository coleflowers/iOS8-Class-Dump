/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/ADSActionViewController.h>
#import <AdSheet/ADSWebViewControllerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface ADSWebViewActionViewController : ADSActionViewController <ADSWebViewControllerDelegate> {

	UITapGestureRecognizer* _homeButtonGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * homeButtonGestureRecognizer;              //@synthesize homeButtonGestureRecognizer=_homeButtonGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpaceController;
-(void)adWebViewControllerShouldDismiss:(id)arg1 ;
-(void)adWebViewController:(id)arg1 routeExternalURL:(id)arg2 ;
-(void)adWebViewControllerWillPresentViewController:(id)arg1 ;
-(void)adWebViewControllerDidDismissViewController:(id)arg1 ;
-(UITapGestureRecognizer *)homeButtonGestureRecognizer;
-(void)_homeButtonTapped:(id)arg1 ;
-(void)setHomeButtonGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

