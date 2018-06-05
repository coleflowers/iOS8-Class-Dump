/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MNNavigationOverviewBar.h>

@class TwoLineTopBarTitleView, InlineNavigationTopBarTitleView, NSString;

@interface SteppingTopBarContentProvider : MNNavigationOverviewBar {

	TwoLineTopBarTitleView* _compressedTitle;
	InlineNavigationTopBarTitleView* _regularTitle;
	unsigned long long _stepIndex;
	unsigned long long _totalSteps;
	NSString* _destinationDisplayName;

}

@property (assign,nonatomic) unsigned long long stepIndex;                 //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) unsigned long long totalSteps;                //@synthesize totalSteps=_totalSteps - In the implementation block
@property (nonatomic,copy) NSString * destinationDisplayName;              //@synthesize destinationDisplayName=_destinationDisplayName - In the implementation block
-(void)setDestinationDisplayName:(NSString *)arg1 ;
-(NSString *)destinationDisplayName;
-(void)_updatePrimaryText;
-(void)_updateSecondaryText;
-(unsigned long long)totalSteps;
-(void)setTotalSteps:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)stepIndex;
-(void)setStepIndex:(unsigned long long)arg1 ;
@end
