/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <Maps/RAPPresentingViewController.h>

@class RAPReport, NSString;

@interface RAPReportComposerViewController : UINavigationController <RAPPresentingViewController> {

	RAPReport* _report;
	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)segueToViewController:(id)arg1 ;
-(void)returnFromViewController:(id)arg1 ;
-(void)_send;
-(void)_invokeCompletion;
-(void)segueToViewController:(id)arg1 afterReturningFromViewController:(id)arg2 ;
-(id)initWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancel;
@end

