/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:05 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface COSSecurePairingHeader : UIView {

	UILabel* _headerLabel;
	UILabel* _devices;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * devices;                  //@synthesize devices=_devices - In the implementation block
-(void)setDevices:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(UILabel *)devices;
@end
