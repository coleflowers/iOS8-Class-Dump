/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/QLPreviewItem.h>

@class NSURL, NSString, NoteAttachmentPresentation, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject <QLPreviewItem> {

	NoteAttachmentPresentation* _presentation;
	DOMHTMLElement* _element;

}

@property (nonatomic,readonly) NoteAttachmentPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,readonly) DOMHTMLElement * element;                               //@synthesize element=_element - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
-(id)initWithPresentation:(id)arg1 element:(id)arg2 ;
-(NoteAttachmentPresentation *)presentation;
-(BOOL)showsUpInRange:(id)arg1 ;
-(id)init;
-(NSURL *)previewItemURL;
-(DOMHTMLElement *)element;
@end

