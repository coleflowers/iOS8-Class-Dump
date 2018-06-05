/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSArray, UIView;

@interface SBSearchTableViewCell : UITableViewCell {

	NSLayoutConstraint* _clippingConstraint;
	BOOL _addedConstantsConstraints;
	NSArray* _variableConstraints;
	BOOL _aboveSelectedCell;
	UIView* _background;
	UIView* _clippingContainer;
	UIView* _separatorView;
	double _leftSeparatorMargin;

}

@property (assign,getter=isAboveSelectedCell,nonatomic) BOOL aboveSelectedCell;              //@synthesize aboveSelectedCell=_aboveSelectedCell - In the implementation block
@property (nonatomic,readonly) NSArray * constantConstraints; 
@property (nonatomic,readonly) NSArray * variableConstraints; 
@property (nonatomic,readonly) UIView * background;                                          //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) UIView * clippingContainer;                                   //@synthesize clippingContainer=_clippingContainer - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) double leftMargin; 
@property (nonatomic,readonly) double rightMargin; 
@property (nonatomic,readonly) double verticalImageMargin; 
@property (assign) double leftSeparatorMargin;                                               //@synthesize leftSeparatorMargin=_leftSeparatorMargin - In the implementation block
+(id)attributedString:(id)arg1 withLineBreakMode:(long long)arg2 defaultParagraphStyle:(id)arg3 ;
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
+(void)configureViewForDisplay:(id)arg1 viewType:(long long)arg2 ;
+(id)attributedStringForImage:(id)arg1 baselineOffset:(double)arg2 ;
+(id)unmaskedSelectedBackgroundColor;
+(BOOL)shouldDisplayImagesForDomain:(unsigned)arg1 ;
+(id)tableViewCellClasses;
+(id)cellIdentifierForSection:(id)arg1 result:(id)arg2 ;
+(id)maskedSelectedBackgroundColor;
+(void)registerClass:(Class)arg1 ;
+(id)backgroundColor;
+(void)initialize;
+(id)textColor;
+(id)selectedTextColor;
+(id)lineColor;
-(double)verticalImageMargin;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(UIView *)clippingContainer;
-(void)updateBottomLine;
-(void)setLeftSeparatorMargin:(double)arg1 ;
-(void)updateSelectedState;
-(void)setAboveSelectedCell:(BOOL)arg1 ;
-(BOOL)aboveSelectedCell;
-(void)clipToTopHeaderWithHeight:(double)arg1 inTableView:(id)arg2 ;
-(BOOL)isAboveSelectedCell;
-(double)leftSeparatorMargin;
-(NSArray *)variableConstraints;
-(NSArray *)constantConstraints;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIView *)separatorView;
-(UIView *)background;
-(double)rightMargin;
-(double)leftMargin;
@end

