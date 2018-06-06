/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/UniversalSearchSimpleResultTableViewCell.h>

@class UniversalSearchITunesResultRatingView, EvenlyDistributedImagesView, UILabel, UIImageView, NSLayoutConstraint, NSArray, NSString, UIImage;

@interface UniversalSearchITunesResultTableViewCell : UniversalSearchSimpleResultTableViewCell {

	UniversalSearchITunesResultRatingView* _ratingView;
	EvenlyDistributedImagesView* _moreGlyphsView;
	UILabel* _rottenTomatoesTextLabel;
	UIImageView* _rottenTomatoesGlyphImageView;
	NSLayoutConstraint* _detailLabelBaselineToMoreGlyphsViewBottomConstraint;
	NSLayoutConstraint* _moreGlyphsViewBottomToRatingViewBottomConstraint;
	NSLayoutConstraint* _ratingViewBottomToContentViewBottomConstraint;
	NSArray* _rottenTomatoesGlyphPlacementConstraints;
	NSString* _rottenTomatoesText;
	BOOL _rottenTomatoesTextOnOwnLine;
	UIImage* _rottenTomatoesGlyph;

}

@property (assign,nonatomic) double rating; 
-(void)configureWithSearchResult:(id)arg1 searchSession:(id)arg2 ;
-(void)initializeLayoutContraints;
-(id)templateTextAndImageColor;
-(double)distanceFromDetailLabelBaselineToMoreGlyphsViewBottom;
-(double)_distanceFromMoreGlyphsViewBottomToRatingViewBottom;
-(void)setRottenTomatoesContentFromResult:(id)arg1 searchSession:(id)arg2 ;
-(void)setMoreGlyphs:(id)arg1 ;
-(void)configureIconImagesWithSearchResult:(id)arg1 searchSession:(id)arg2 ;
-(void)configureAdditionalGlyphsWithSearchResult:(id)arg1 searchSession:(id)arg2 ;
-(void)updateBottomPlacementConstraintsForDetailLabel;
-(id)detailLabelBottomPlacementConstraints;
-(void)setRating:(double)arg1 ;
-(double)rating;
@end

