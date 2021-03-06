/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconView.h>
#import <SpringBoard/_UISettingsKeyObserver.h>

@class SBFolderSettings, NSString;

@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver> {

	SBFolderSettings* _folderSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowLabelAccessoryView;
-(void)prepareDropGlow;
-(void)showDropGlow:(BOOL)arg1 ;
-(void)removeDropGlow;
-(id)dropGlow;
-(CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1 ;
-(id)iconBackgroundView;
-(id)folderIcon;
-(void)scrollToFirstGapAnimated:(BOOL)arg1 ;
-(unsigned long long)firstVisibleMiniIconIndex;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(double)arg1 ;
-(void)scrollToTopOfPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)visibleMiniIconCount;
-(void)setFloatyFolderCrossfadeFraction:(double)arg1 ;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)visibleMiniIconListIndex;
-(unsigned long long)centerVisibleMiniIconIndex;
-(unsigned long long)lastVisibleMiniIconIndex;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1 ;
-(void)setIconGridImageAlpha:(double)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(BOOL)arg2 ;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)_updateAdaptiveColors;
-(double)grabDurationForEvent:(id)arg1 ;
-(BOOL)allowsTapWhileEditing;
-(void)_applyEditingStateAnimated:(BOOL)arg1 ;
-(void)setShouldRasterizeImageView:(BOOL)arg1 ;
-(id)_folderIconImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setIcon:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)folder;
@end

