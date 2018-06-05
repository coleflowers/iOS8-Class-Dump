/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MapsAutoLayoutContext, NSString;

@interface InlineTopBarTitleView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	MapsAutoLayoutContext* _layoutContext;
	BOOL _dimmed;
	BOOL _darkUI;

}

@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;              //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,getter=isUIDark,nonatomic) BOOL darkUI;              //@synthesize darkUI=_darkUI - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setDarkUI:(BOOL)arg1 ;
-(BOOL)isUIDark;
-(void)_updateStyling;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
@end

