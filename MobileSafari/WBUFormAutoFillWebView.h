/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol WBUFormAutoFillWebView <NSObject>
@property (nonatomic,readonly) UIView * webui_viewForAutoFillPrompt; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@required
-(id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(UIView *)webui_viewForAutoFillPrompt;
-(BOOL)webui_privateBrowsingEnabled;
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;

@end
