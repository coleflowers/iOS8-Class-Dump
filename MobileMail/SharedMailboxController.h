/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileMail/MobileMail-Structs.h>
@class NSObject, NSArray, MFMessageCriterion, UIImage;

@interface SharedMailboxController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _mailboxes;
	MFMessageCriterion* _criterion;
	long long _badgeCount;
	int _badgeCountGenerationNumber;
	int _exposure;
	UIImage* _icon;
	unsigned long long _sourceType;

}

@property (assign,nonatomic) unsigned long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
+(id)allSharedInstances;
+(id)sharedInstanceForSourceType:(unsigned long long)arg1 ;
-(void)setBadgeCountNeedsUpdate;
-(BOOL)shouldIncludeMessage:(id)arg1 ;
-(void)reloadPreferences;
-(void)invalidateIcon;
-(void)reloadCriterion;
-(id)mailboxTitle;
-(id)iconTintColor;
-(Class)criterionSourceClass;
-(BOOL)shouldBeDisplayed;
-(id)lastInitialBadgeCountDefaultKey;
-(void)updateMailboxes;
-(void)accountsDidChange:(id)arg1 ;
-(void)messageFlagChanged:(id)arg1 ;
-(void)setBadgeCount:(long long)arg1 notifyChange:(BOOL)arg2 ;
-(void)updateBadgeCountAsynchronously;
-(long long)computeBadgeCountSynchronously;
-(id)icon;
-(CGPoint)iconOffset;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(id)iconImage;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
-(void)setExposure:(int)arg1 ;
-(id)navigationTitle;
@end

