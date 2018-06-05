/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchResultsModalViewControllerAction.h>
#import <SpringBoard/SKStoreProductViewControllerDelegate.h>

@class NSString;

@interface SBSearchResultsiTunesAction : SBSearchResultsModalViewControllerAction <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresNavigationController;
-(void)loadModalViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
@end
