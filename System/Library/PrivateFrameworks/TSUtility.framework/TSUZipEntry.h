/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface TSUZipEntry : NSObject {

	BOOL _compressed;
	unsigned short _nameLength;
	unsigned short _extraFieldsLength;
	unsigned _CRC;
	NSString* _name;
	NSDate* _lastModificationDate;
	unsigned long long _size;
	NSString* _collapsedName;
	unsigned long long _compressedSize;
	unsigned long long _offset;
	unsigned long long _fileHeaderLength;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * collapsedName;                           //@synthesize collapsedName=_collapsedName - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,copy) NSDate * lastModificationDate;                      //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long compressedSize;                //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                     //@synthesize CRC=_CRC - In the implementation block
@property (assign,nonatomic) unsigned short nameLength;                        //@synthesize nameLength=_nameLength - In the implementation block
@property (assign,nonatomic) unsigned short extraFieldsLength;                 //@synthesize extraFieldsLength=_extraFieldsLength - In the implementation block
@property (assign,nonatomic) unsigned long long fileHeaderLength;              //@synthesize fileHeaderLength=_fileHeaderLength - In the implementation block
-(unsigned)CRC;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(unsigned long long)offset;
-(unsigned long long)size;
-(NSString *)name;
-(id)description;
-(void)setOffset:(unsigned long long)arg1 ;
-(NSDate *)lastModificationDate;
-(BOOL)isCompressed;
-(void)setCRC:(unsigned)arg1 ;
-(unsigned long long)compressedSize;
-(void)setName:(NSString *)arg1 ;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(void)setNameLength:(unsigned short)arg1 ;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(NSString *)collapsedName;
-(unsigned short)extraFieldsLength;
-(void)setCollapsedName:(NSString *)arg1 ;
-(unsigned short)nameLength;
-(void)setExtraFieldsLength:(unsigned short)arg1 ;
-(unsigned long long)fileHeaderLength;
-(void)setFileHeaderLength:(unsigned long long)arg1 ;
@end

