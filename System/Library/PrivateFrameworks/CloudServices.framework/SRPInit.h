/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SRPClientRequest.h>

@class NSString, NSDictionary, SecureBackup;

@interface SRPInit : NSObject <SRPClientRequest> {

	NSString* _recordLabel;
	NSDictionary* _escrowRecord;
	NSString* _recordID;
	SecureBackup* _sb;

}

@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy) NSString * recordLabel;                              //@synthesize recordLabel=_recordLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain) NSDictionary * escrowRecord;                       //@synthesize escrowRecord=_escrowRecord - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain,readonly) SecureBackup * sb;                        //@synthesize sb=_sb - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SecureBackup *)sb;
-(NSString *)dsid;
-(NSString *)recordID;
-(void)setRecordID:(NSString *)arg1 ;
-(id)validateInput;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(id)initWithSecureBackup:(id)arg1 ;
-(void)setRecordLabel:(NSString *)arg1 ;
-(void)setEscrowRecord:(NSDictionary *)arg1 ;
@end

