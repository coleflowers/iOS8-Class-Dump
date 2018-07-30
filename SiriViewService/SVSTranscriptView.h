/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@class SVSTranscriptContentView, UICollectionView, UIView;

@interface SVSTranscriptView : UIView {

	SVSTranscriptContentView* _contentView;

}

@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (nonatomic,retain) UIView * suggestionsView; 
@property (assign,nonatomic) double topMargin; 
-(id)initWithFrame:(CGRect)arg1 collectionView:(id)arg2 ;
-(void)setSuggestionsView:(UIView *)arg1 ;
-(void)setKeylineHidden:(BOOL)arg1 ;
-(UIView *)suggestionsView;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
@end
