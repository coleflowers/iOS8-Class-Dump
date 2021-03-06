/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <MobileMail/MFAddressBookClient.h>
#import <MobileMail/MessageSuggestionBannerDelegate.h>

@protocol MFMessageContentDisplayDelegate, MFSuggestionHandlingDelegate;
@class MFMessageViewingContext, MailAccount, NSArray, NSSet, NSMutableSet, NSMutableArray, NSMutableDictionary, WorkingPushButton, MessageHeaderHeader, MFModernLabelledAtomList, MessageSuggestionBanner, SeparatorLayer, MFCaptionLabel, UIImageView, NSString;

@interface MessageHeaderLayer : UIView <MFAddressBookClient, MessageSuggestionBannerDelegate> {

	MFMessageViewingContext* _context;
	MailAccount* _account;
	CGSize _oldSize;
	NSArray* _cachedToRecipients;
	NSArray* _cachedCcRecipients;
	NSArray* _cachedBccRecipients;
	NSArray* _cachedSenders;
	NSSet* _cachedReceivingEmailAddresses;
	NSMutableSet* _callsToAction;
	NSMutableArray* _layersToRemoveWhenSmall;
	NSMutableDictionary* _atomListDictionary;
	WorkingPushButton* _infoButton;
	WorkingPushButton* _oldInfoButton;
	MessageHeaderHeader* _header;
	MFModernLabelledAtomList* _primaryField;
	MessageSuggestionBanner* _suggestionBanner;
	SeparatorLayer* _bannerSeparator;
	double _horizontalInset;
	int _displayStyle;
	MFCaptionLabel* _captionLabel;
	void* _displayedPerson;
	UIImageView* _personIconImageView;
	unsigned _showDetails : 1;
	unsigned _enabled : 1;
	unsigned _selected : 1;
	unsigned _isOutgoing : 1;
	unsigned _suggestionBannerVisible : 1;
	BOOL _preventLayout;
	id<MFMessageContentDisplayDelegate> _displayDelegate;
	id<MFSuggestionHandlingDelegate> _suggestionDelegate;

}

@property (nonatomic,retain) MFMessageViewingContext * viewingContext;                                                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<MFMessageContentDisplayDelegate> displayDelegate;                                                           //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (assign,nonatomic) id<MFSuggestionHandlingDelegate> suggestionDelegate;                                                           //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (assign,nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge; 
@property (assign,nonatomic) double horizontalInset;                                                                                        //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (nonatomic,retain) MailAccount * account;                                                                                         //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL preventLayout;                                                                                            //@synthesize preventLayout=_preventLayout - In the implementation block
@property (assign,setter=_setSuggestionBannerVisible:,getter=_suggestionBannerVisible,nonatomic) BOOL suggestionBannerVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)clearMessage;
-(void)displayMessage:(id)arg1 withStyle:(int)arg2 ;
-(void)updateForRedisplay;
-(void)viewingContextFinishedLoading:(id)arg1 ;
-(id<MFMessageContentDisplayDelegate>)displayDelegate;
-(void)setDisplayDelegate:(id<MFMessageContentDisplayDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayStyle:(int)arg2 ;
-(void)setSuggestionDelegate:(id<MFSuggestionHandlingDelegate>)arg1 ;
-(void)setBottomSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
-(CGRect)subjectFrame;
-(void)infoButtonClicked:(id)arg1 ;
-(void)_trustDidChange:(id)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)_updatePrimaryFieldCaption;
-(void)_cacheContactPhoto;
-(void)_invalidateAtomsAndContactPhoto;
-(void)_removeDetailLayers;
-(void)_updateSuggestionBannerHidden;
-(void)_setSuggestionBannerVisible:(BOOL)arg1 ;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
-(void)createInfoButtonWithTitle:(id)arg1 ;
-(void)updateInfoButton;
-(id)_arrangedRecipients:(id)arg1 withReceivingEmailAddresses:(id)arg2 ;
-(void)recipientAtomPressed:(id)arg1 ;
-(void)senderAtomPressed:(id)arg1 ;
-(void)_updatePrimaryFieldUI;
-(void)_setShowDetails:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)_updateAtomStyles;
-(void)addBannersForCallsToAction:(id)arg1 animated:(BOOL)arg2 ;
-(MFMessageViewingContext *)viewingContext;
-(void)_updateVIPStatus;
-(void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2 ;
-(BOOL)preventLayout;
-(double)atomListLineSpacing;
-(void)_updateContactPhotoViewAlpha;
-(BOOL)_captionLabelIsVisible;
-(BOOL)canShowMarkButton;
-(void)updateDateAndTime;
-(void)_addDetailLayers;
-(void)_sendAction:(SEL)arg1 forAddressAtom:(id)arg2 ;
-(BOOL)bottomSeparatorDrawsFlushWithLeadingEdge;
-(void)setPreventLayout:(BOOL)arg1 ;
-(void)_headerAnimationDidStop;
-(void)_headerHeightDidChangeAfterAnimation:(BOOL)arg1 ;
-(id)_addAddressListWithAddresses:(id)arg1 label:(id)arg2 title:(id)arg3 maxWidth:(double)arg4 action:(SEL)arg5 ;
-(void)_setSuggestionBannerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_atomContainsVIPSender:(id)arg1 ;
-(id)callsToAction;
-(void)messageSuggestionBanner:(id)arg1 sender:(id)arg2 confirmedAction:(id)arg3 ;
-(void)messageSuggestionBanner:(id)arg1 sender:(id)arg2 ignoredAction:(id)arg3 ;
-(void)didSelectMessageSuggestionBanner:(id)arg1 sender:(id)arg2 ;
-(id)htmlRepresentationLeavingSpaceForPhoto:(BOOL)arg1 ;
-(id)personIconImageView;
-(void)_buttonAnimationDidFinish;
-(BOOL)_suggestionBannerVisible;
-(void)clearSuggestionsBanners;
-(id<MFSuggestionHandlingDelegate>)suggestionDelegate;
-(void*)displayedPerson;
-(BOOL)usePadDisplayStyle;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(BOOL)enabled;
-(void)setViewingContext:(MFMessageViewingContext *)arg1 ;
-(id)bottomSeparator;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
@end

