/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol WFPropertyListObject;
@class NSString, WFImage, WFContentItem, NSData;

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _selected;
	BOOL _hideSubtitle;
	NSString* _title;
	NSString* _identifier;
	id<WFPropertyListObject> _serializedPossibleState;
	NSString* _subtitle;
	WFImage* _image;
	WFContentItem* _contentItem;
	NSData* _archivedContentItem;

}

@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) WFImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL hideSubtitle;                                               //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
@property (nonatomic,retain) WFContentItem * contentItem;                                     //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,readonly) NSData * archivedContentItem;                                  //@synthesize archivedContentItem=_archivedContentItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL selected;                                                 //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) BOOL showingStaticContent; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,readonly) id<WFPropertyListObject> serializedPossibleState;              //@synthesize serializedPossibleState=_serializedPossibleState - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasImage;
-(unsigned long long)hash;
-(BOOL)selected;
-(WFContentItem *)contentItem;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setImage:(WFImage *)arg1 ;
-(WFImage *)image;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentItem:(WFContentItem *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHideSubtitle:(BOOL)arg1 ;
-(BOOL)hideSubtitle;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(BOOL)arg4 serializedPossibleState:(id)arg5 ;
-(id)initWithContentItem:(id)arg1 selected:(BOOL)arg2 hideSubtitle:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(BOOL)arg4 contentItem:(id)arg5 hideSubtitle:(BOOL)arg6 serializedPossibleState:(id)arg7 ;
-(BOOL)showingStaticContent;
-(void)_loadContentItemWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)loadSubtitleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)loadAltTextWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)loadImageWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(id<WFPropertyListObject>)serializedPossibleState;
-(NSData *)archivedContentItem;
@end

