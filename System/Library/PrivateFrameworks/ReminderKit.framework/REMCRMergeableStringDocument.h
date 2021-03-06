/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMReplicaIDSource, TTMergeableStringVersionedDocument, NSString, NSAttributedString;

@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding> {

	REMReplicaIDSource* _replicaIDSource;
	TTMergeableStringVersionedDocument* _document;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                       //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) TTMergeableStringVersionedDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
+(id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4 ;
-(id)serializedData;
-(NSAttributedString *)attributedString;
-(id)mergedWithDocument:(id)arg1 error:(id*)arg2 ;
-(id)initWithReplicaIDSource:(id)arg1 string:(id)arg2 ;
-(TTMergeableStringVersionedDocument *)document;
-(id)mutableDocument;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REMReplicaIDSource *)replicaIDSource;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
-(id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id*)arg3 ;
@end

