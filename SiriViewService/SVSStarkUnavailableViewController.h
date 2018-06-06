/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriViewService/SVSStarkItemController.h>

@protocol SVSStarkItemControllerDelegate;
@class NSUUID, SVSStarkUnavailableSnippetView, NSString;

@interface SVSStarkUnavailableViewController : UIViewController <SVSStarkItemController> {

	SVSStarkUnavailableSnippetView* _snippetView;
	id<SVSStarkItemControllerDelegate> _delegate;
	NSString* _titleString;
	long long _interactionStyle;
	NSUUID* _conversationItemIdentifier;

}

@property (assign,nonatomic,__weak) id<SVSStarkItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * titleString;                                            //@synthesize titleString=_titleString - In the implementation block
@property (assign,nonatomic) long long interactionStyle;                                      //@synthesize interactionStyle=_interactionStyle - In the implementation block
@property (nonatomic,copy) NSUUID * conversationItemIdentifier;                               //@synthesize conversationItemIdentifier=_conversationItemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)interactionStyle;
-(void)setInteractionStyle:(long long)arg1 ;
-(NSUUID *)conversationItemIdentifier;
-(void)setConversationItemIdentifier:(NSUUID *)arg1 ;
-(void)setDelegate:(id<SVSStarkItemControllerDelegate>)arg1 ;
-(id<SVSStarkItemControllerDelegate>)delegate;
-(BOOL)isActive;
-(void)loadView;
-(void)viewDidLoad;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

