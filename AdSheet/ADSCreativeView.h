/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/ADWebView.h>

@class ADSAdImpression;

@interface ADSCreativeView : ADWebView {

	BOOL _detachedFromContainerView;
	ADSAdImpression* _adImpression;

}

@property (nonatomic,retain) ADSAdImpression * adImpression;              //@synthesize adImpression=_adImpression - In the implementation block
@property (assign,nonatomic) BOOL detachedFromContainerView;              //@synthesize detachedFromContainerView=_detachedFromContainerView - In the implementation block
-(ADSAdImpression *)adImpression;
-(void)setAdImpression:(ADSAdImpression *)arg1 ;
-(BOOL)detachedFromContainerView;
-(void)setDetachedFromContainerView:(BOOL)arg1 ;
-(void)dealloc;
@end

