/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <FaceTime/PHFrecentCellProtocol.h>

@protocol PHSearchResultProtocol, PHFrecentCellDelegate;
@class UILabel, UIButton, NSLayoutConstraint, NSString;

@interface PHFrecentSearchCell : UITableViewCell <PHFrecentCellProtocol> {

	UILabel* _nameLabel;
	UIButton* _facetimeAudioButton;
	UIButton* _facetimeButton;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	id<PHSearchResultProtocol> _searchResult;
	long long _constraintsToken;
	id<PHFrecentCellDelegate> _delegate;

}

@property (nonatomic,retain) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIButton * facetimeAudioButton;                     //@synthesize facetimeAudioButton=_facetimeAudioButton - In the implementation block
@property (nonatomic,retain) UIButton * facetimeButton;                          //@synthesize facetimeButton=_facetimeButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                 //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;              //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (retain) id<PHSearchResultProtocol> searchResult;                      //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) long long constraintsToken;                         //@synthesize constraintsToken=_constraintsToken - In the implementation block
@property (assign,nonatomic) id<PHFrecentCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)_buildConstraints;
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setFaceTimeAvailable:(BOOL)arg1 ;
-(void)setFaceTimeAudioAvailable:(BOOL)arg1 ;
-(long long)constraintsToken;
-(void)setConstraintsToken:(long long)arg1 ;
-(void)faceTimeAudioButtonTapped:(id)arg1 ;
-(void)faceTimeButtonTapped:(id)arg1 ;
-(UIButton *)facetimeAudioButton;
-(UIButton *)facetimeButton;
-(void)setFacetimeAudioButton:(UIButton *)arg1 ;
-(void)setFacetimeButton:(UIButton *)arg1 ;
-(void)setContact:(id)arg1 ;
-(void)_updateFonts;
-(void)dealloc;
-(void)setDelegate:(id<PHFrecentCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<PHFrecentCellDelegate>)delegate;
-(void)updateConstraints;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setSearchResult:(id<PHSearchResultProtocol>)arg1 ;
-(id<PHSearchResultProtocol>)searchResult;
@end
