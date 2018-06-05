/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, NSMutableArray, PHFavoritesEntry;

@interface PHFavoritesCell : UITableViewCell {

	UILabel* _titleTextLabel;
	UILabel* _labelTextLabel;
	UIImageView* _iconGlyphView;
	UIImageView* _contactPhotoView;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;
	NSLayoutConstraint* _iconLabelConstraint;
	long long _buildConstraintsOnceToken;
	NSMutableArray* _contactPhotoConstraints;
	NSMutableArray* _textLabelConstraints;
	NSMutableArray* _iconGlyphConstraints;
	PHFavoritesEntry* _favoritesEntry;

}

@property (assign,nonatomic) PHFavoritesEntry * favoritesEntry;              //@synthesize favoritesEntry=_favoritesEntry - In the implementation block
@property (readonly) BOOL shouldShowTextLabel; 
@property (readonly) BOOL shouldShowIconGlyph; 
@property (readonly) BOOL shouldShowContactPhotos; 
+(BOOL)shouldShowContactPhotos;
+(id)faceTimeAudioGlyph;
+(id)faceTimeAudioGlyphPress;
+(id)faceTimeGlyph;
+(id)faceTimeGlyphPress;
+(double)editingMarginWidth;
+(double)marginWidth;
-(BOOL)shouldShowContactPhotos;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleFavoritesShowsContactPhotosChanged:(id)arg1 ;
-(void)_handleFavoritesEntryChanged:(id)arg1 ;
-(void)_populateSubviewsFromFavoritesItem;
-(void)_buildConstraints;
-(BOOL)shouldShowTextLabel;
-(BOOL)shouldShowIconGlyph;
-(void)setFavoritesEntry:(PHFavoritesEntry *)arg1 ;
-(PHFavoritesEntry *)favoritesEntry;
-(void)_updateFonts;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_drawsTopSeparatorDuringReordering;
-(void)_setReordering:(BOOL)arg1 ;
-(void)_updateConstraints;
@end

