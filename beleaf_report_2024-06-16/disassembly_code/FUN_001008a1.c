
undefined8 FUN_001008a1(void)

{
  size_t sVar1;
  long lVar2;
  long in_FS_OFFSET;
  ulong local_b0;
  char local_98 [136];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter the flag\n>>> ");
  __isoc99_scanf(&DAT_00100a78,local_98);
  sVar1 = strlen(local_98);
  if (sVar1 < 0x21) {
    puts("Incorrect!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  for (local_b0 = 0; local_b0 < sVar1; local_b0 = local_b0 + 1) {
    lVar2 = FUN_001007fa((int)local_98[local_b0]);
    if (lVar2 != *(long *)(&DAT_003014e0 + local_b0 * 8)) {
      puts("Incorrect!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  puts("Correct!");
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

