/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:07 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/ManagedActivityViewController.h>
#import <MobileSafari/BrowserPanel.h>

@class NSString;

@interface ActionPanel : ManagedActivityViewController <BrowserPanel> {

	BOOL _inCancel;
	BOOL _inCompletionHandler;
	BOOL _viewCanEarlyDismiss;
	NSString* _currentExtensionIdentifier;

}

@property (nonatomic,copy) NSString * currentExtensionIdentifier;              //@synthesize currentExtensionIdentifier=_currentExtensionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_customActivities;
-(void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2 ;
-(void)_activityDidComplete:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)_prepareJavaScriptExtensionItemForActivity:(id)arg1 ;
-(void)_preparePostToSocialNetwork:(id)arg1 ;
-(void)_prepareMail:(id)arg1 ;
-(void)_preparePrint:(id)arg1 ;
-(id)_extensionItemForExtensionActivity:(id)arg1 ;
-(id)_javaScriptProcessingFileURLInExtension:(id)arg1 ;
-(void)panelWillSuspend;
-(BOOL)shouldResumePanel;
-(void)willHideOnSuspend;
-(BOOL)_shouldSendBrowserPanelNotification;
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(void)cancelActionPanel;
-(BOOL)shouldHideOnSuspend;
-(id)init;
-(long long)preferredStatusBarStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCurrentExtensionIdentifier:(NSString *)arg1 ;
-(NSString *)currentExtensionIdentifier;
-(void)_cancel;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_executeActivity;
-(id)_titleForActivity:(id)arg1 ;
@end

